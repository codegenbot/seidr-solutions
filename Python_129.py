import heapq

class Node:
    def __init__(self, value, row, col):
        self.value = value
        self.row = row
        self.col = col
        self.adjacent = list()

    def addAdjacent(self, node):
        self.adjacent.append(node)

    def __lt__(self, other):
        return self.value < other.value


def solve(grid, k):
    queue = []
    nodes = dict()

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            node = Node(grid[i][j], i, j)
            nodes[node] = node

            if i > 0:
                node.addAdjacent(nodes[grid[i-1][j]])
                nodes[grid[i-1][j]].addAdjacent(node)

            if j > 0:
                node.addAdjacent(nodes[grid[i][j-1]])
                nodes[grid[i][j-1]].addAdjacent(node)

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            queue.append(Node(grid[i][j], i, j))

    heapq.heapify(queue)
    result = list()

    for i in range(k):
        node = heapq.pop(queue)
        result.append(node.value)

        for a in node.adjacent:
            if a in queue:
                queue.remove(a)
                heapq.heappush(queue, a)

    return result


def minPath(grid, k):
    """
    Given a grid with N rows and N columns (N >= 2) and a positive integer k, 
    each cell of the grid contains a value. Every integer in the range [1, N * N]
    inclusive appears exactly once on the cells of the grid.

    You have to find the minimum path of length k in the grid. You can start
    from any cell, and in each step you can move to any of the neighbor cells,
    in other words, you can go to cells which share an edge with you current
    cell.
    Please note that a path of length k means visiting exactly k cells (not
    necessarily distinct).
    You CANNOT go off the grid.
    A path A (of length k) is considered less than a path B (of length k) if
    after making the ordered lists of the values on the cells that A and B go
    through (let's call them lst_A and lst_B), lst_A is lexicographically less
    than lst_B, in other words, there exist an integer index i (1 <= i <= k)
    such that lst_A[i] < lst_B[i] and for any j (1 <= j < i) we have
    lst_A[j] = lst_B[j].
    It is guaranteed that the answer is unique.
    Return an ordered list of the values on the cells that the minimum path go through.

    Examples:


    # Write your code here.
    return solve(grid, k)


grid = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

k = 3

result = minPath(grid, k)

print(result)
        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """
