# This is the code that you have to complete.
# You have to complete the code such that it returns the path of length k in the grid
# with the minimum lexicographical order.
# If there are more than one path of length k with the same lexicographical order,
# you can choose any of them.
#
# The grid is represented as a list of lists. The grid is always of size n by n,
# where n is a positive integer.
# For example, the following grid is of size 3 by 3:
# grid = [ [1,2,3], [4,5,6], [7,8,9] ]
#
# You CANNOT go off the grid.
# You CANNOT go to a cell that has been visited before in the current path.
# You can go to any neighbor of the current cell.
#
# A path A (of length k) is considered less than a path B (of length k) if after
# making the ordered lists of the values on the cells that A and B go through
# (let's call them lst_A and lst_B), lst_A is lexicographically less than lst_B,
# in other words, there exist an integer index i (1 <= i <= k) such that
# lst_A[i] < lst_B[i] and for any j (1 <= j < i) we have lst_A[j] = lst_B[j].
# It is guaranteed that the answer is unique.
# Return an ordered list of the values on the cells that the minimum path go through.
#
# You can assume that all inputs are valid.
#
# Examples:
#
# Input: grid = [ [1,2,3], [4,5,6], [7,8,9]], k = 3
# Output: [1, 2, 1]
#
# Input: grid = [ [5,9,3], [4,1,6], [7,8,2]], k = 1
# Output: [1]


def minPath(grid, k):
    # Your code goes here.
