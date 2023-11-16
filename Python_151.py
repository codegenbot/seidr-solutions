
list = [1,2,3,4,5]

def double_the_difference(list):
    sum = 0
    for x in list:
        if x % 2 != 0:
            sum = sum + x
    return sum

odd_sum = double_the_difference(list)

def check(program):
    if program(lst) == odd_sum:
        print("Correct!")
    else:
        print("Try again!")

check(double_the_difference)
