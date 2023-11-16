
def double_the_difference(lst):
    '''
    Given a list of numbers, return the sum of squares of the numbers
    in the list that are odd. Ignore numbers that are negative or not integers.
    
    double_the_difference([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 10
    double_the_difference([-1, -2, 0]) == 0
    double_the_difference([9, -2]) == 81
    double_the_difference([0]) == 0  
   
    If the input list is empty, return 0.
    '''
    # Write your code here
    # You can add helper functions as needed
    # You can add helper functions as needed
    def is_valid(x):
        return type(x) == int and x >= 0

    def square(x):
        return x * x

    def double(x):
        return 2 * x

    def is_odd(x):
        return x % 2 != 0

    def add(x, y):
        return x + y

    def double_the_difference(lst):
        return reduce(add, map(double, filter(is_odd, map(square, filter(is_valid, lst)))))

    return double_the_difference(lst)


print(double_the_difference([1, 3, 2, 0]))
print(double_the_difference([-1, -2, 0]))
print(double_the_difference([9, -2]))
print(double_the_difference([0]))
