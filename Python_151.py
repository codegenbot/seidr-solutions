def double_the_difference():
    input_lst = list(
        map(int, input("Enter a list of numbers separated by space: ").split())
    )
    result = sum(i**2 for i in input_lst if isinstance(i, int) and i % 2 != 0)
    return str(result * 2)