from itertools import combinations
from collections import deque

class Node:
    def __init__(self, val, neighbors=[]):
        self.val = val
        self.neighbors = neighbors

    def __lt__(self, other):
        return self.val < other.val

    def __eq__(self, other):
        return self.val == other.val

    def __hash__(self):
        return hash(self.val)

    def __repr__(self):
        return str(self.val)

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

    def get_neighbors(node, grid):
        row, col = node.val
        neighbors = []
        if row > 0:
            neighbors.append(Node((row-1, col), grid[row-1][col]))
        if row < len(grid) - 1:
            neighbors.append(Node((row+1, col), grid[row+1][col]))
        if col > 0:
            neighbors.append(Node((row, col-1), grid[row][col-1]))
        if col < len(grid) - 1:
            neighbors.append(Node((row, col+1), grid[row][col+1]))
        return neighbors

    def bfs(node, k, grid):
        visited = set()
        queue = deque()
        queue.append(node)

        while queue:
            if len(queue) == k:
                return [node.val for node in queue]

            node = queue.popleft()
            visited.add(node)
            for neighbor in get_neighbors(node, grid):
                if neighbor not in visited:
                    queue.append(neighbor)

    def dfs(node, k, grid):
        visited = set()
        stack = []
        stack.append(node)

        while stack:
            if len(stack) == k:
                return [node.val for node in stack]

            node = stack.pop()
            visited.add(node)
            for neighbor in get_neighbors(node, grid):
                if neighbor not in visited:
                    stack.append(neighbor)

    def min_path(start, k, grid):
        min_path = None
        for path in bfs(start, k, grid):
            if min_path is None:
                min_path = path
            elif path < min_path:
                min_path = path
        return min_path

    def build_graph(grid):
        graph = {}
        for row in range(len(grid)):
            for col in range(len(grid[row])):
                graph[Node((row, col), grid[row][col])] = get_neighbors(Node((row, col), grid[row][col]), grid)
        return graph

    graph = build_graph(grid)
    return min_path(graph)

minPath([ [5,9,3], [4,1,6], [7,8,2]], 1)
        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """
