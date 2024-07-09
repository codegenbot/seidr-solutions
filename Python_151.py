def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0) * 2 - max(
        set(lst), key=lst.count
    )


def check(input_str):
    try:
        lst = list(map(int, input_str.split()))
        result = double_the_difference(lst)
        print(result)
    except ValueError:
        print("Invalid input. Please enter a string of space-separated integers.")