def check(result):
    if result == [2, 3]:
        print("Test has passed")
    else:
        print("Test has failed")


grid = [["0", "1", "1", "0"], ["1", "1", "1", "1"], ["1", "1", "1", "1"]]
k = 3
check(findShortestPath(grid, k))