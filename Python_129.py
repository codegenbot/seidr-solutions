import heapq


class HeapNode:
    """
    A node in a minimum heap.
    """
    def __init__(self, value, priority):
        """
        Initializes an instance of HeapNode.

        :param value: a value of a node.
        :param priority: a priority of a node.
        """
        self.value = value
        self.priority = priority

    def __lt__(self, other):
        return self.priority < other.priority

    def __eq__(self, other):
        return self.priority == other.priority

    def __repr__(self):
        return "{} {}".format(self.value, self.priority)


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

    # Do a depth first search (DFS) on the graph of the grid. Stop the DFS once
    # you have found a path of the length k and store it in a heap.
    # The heap contains paths (represented as lists) of all possible lengths
    # between 1 and k. The heap is sorted in ascending order of priorities.
    # The priority of a path is the priority of its last node (its last value).
    # The priority of a node is the number of paths which have the same last
    # value as this node but are lexicographically greater than this node.
    #
    # Once the heap is built, poll one path from it. Return it.
    #
    # The following is a proof by contradiction that the heap is built correctly
    # and that the returned path is the minimum path.
    #
    # Suppose that the heap is not built correctly. Then there exists a path
    # which has a greater priority than the path which is returned.
    #
    # When the first path is being built, the heap does not contain any paths
    # of the same length as the first path, so the priority of the first path
    # is 0.
    #
    # The priority of the path which is returned is greater than or equal to
    # the priority of the first path.
    #
    # So, the priority of the path which is returned is greater than or equal
    # to the priority of the first path and is less than or equal to the
    # priority of the greatest path in the heap.
    #
    # Let the length of the paths be equal to L.
    #
    # The DFS starts with the first path of length 1 and then the first path of
    # length 2 ... and then the first path of length L.
    #
    # So, the first path of length L is the first path to be built in the heap.
    # Then, the second path of length L is built in the heap.
    #
    # The priority of the second path of length L is greater than or equal to
    # the priority of the first path of length L.
    #
    # So, the priority of the second path of length L is greater than or equal
    # to the priority of the path which is returned.
    #
    # This contradicts the fact that the priority of the path which is returned
    # is greater than or equal to the priority of the first path of length L.
    #
    # So, the heap is built correctly.
    #
    # The heap is built correctly, so the returned path is the minimum path.

    # Create the graph of the grid.
    graph = defaultdict(list)
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            neighbors = []
            if i > 0:
                neighbors.append([grid[i - 1][j], i - 1, j])
            if i < len(grid) - 1:
                neighbors.append([grid[i + 1][j], i + 1, j])
            if j > 0:
                neighbors.append([grid[i][j - 1], i, j - 1])
            if j < len(grid[i]) - 1:
                neighbors.append([grid[i][j + 1], i, j + 1])
            graph[grid[i][j]] = neighbors
    # A list of lists. Each list represents a path.
    heap = []
    # Do a DFS on the graph.
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            # Build the first path of length 1.
            path = [grid[i][j]]
            # Add it to the heap.
            heapq.heappush(heap, HeapNode(path, 0))
            # Start a DFS with the first neighbor.
            if i > 0:
                dfs(grid[i][j], i - 1, j, 1, k, path, graph, heap)
            if i < len(grid) - 1:
                dfs(grid[i][j], i + 1, j, 1, k, path, graph, heap)
            if j > 0:
                dfs(grid[i][j], i, j - 1, 1, k, path, graph, heap)
            if j < len(grid[i]) - 1:
                dfs(grid[i][j], i, j + 1, 1, k, path, graph, heap)
    # Return the minimum path.
    return heapq.heappop(heap).value


def dfs(last_value, i, j, length, k, path, graph, heap):
    # Stop the DFS if the path is full.
    if length == k:
        return
    # Extend the path.
    path.append(grid[i][j])
    # Add the new path to the heap.
    heapq.heappush(heap, HeapNode(path, last_value))
    # Visit the first neighbor.
    if i > 0:
        dfs(grid[i][j], i - 1, j, length + 1, k, path, graph, heap)
    if i < len(grid) - 1:
        dfs(grid[i][j], i + 1, j, length + 1, k, path, graph, heap)
    if j > 0:
        dfs(grid[i][j], i, j - 1, length + 1, k, path, graph, heap)
    if j < len(grid[i]) - 1:
        dfs(grid[i][j], i, j + 1, length + 1, k, path, graph, heap)
    # Remove the last node from the path.
    path.pop()
        Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
        Output: [1, 2, 1]

        Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
        Output: [1]
    """
