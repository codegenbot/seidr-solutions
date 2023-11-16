

---- Define Program ----
We provide some examples to help get you started!

## Examples:
print(str(-1 - 1))
print("Hello")
## End Examples

## Notes:
return 0
## End Notes

---- Implement Program ----
def sum_squares (lst):
    sum([x**2 for x in lst])
    return 0

---- Test Environment ----
assert check(sum_squares)
---- End Test Environment ----

---- Test Cases ----

[[[2.3], 3.289999999999999], [[1.2, 4.2], 16.61], [[1, 4], 27], [[1, 4, 9], 172], [[1, 3, 5, 7], 121], [[-2.4, 1, 1], 6], [[-1, 1, 0], 2], [[1], 1], [[0], 0], [[], 0]]
---- End Test Cases ----

-------------------------- END PROGRAM --------------------------
