def check(num1, num2):
    if double_the_difference([num1, num2]) == double_the_difference(
        [abs(x) for x in [num1, num2]]
    ):
        return "It's a Pitfall!"