def num_dict():
    return {"1": 1, "2": 2}


def sort_numbers(user_input=""):
    if not user_input:
        user_input = input("Enter space-separated numbers: ")
    return [int(x) for x in user_input.split()]


def solve():
    sorted_nums = sorted([num_dict()[i] for i in sort_numbers()])
    result = " ".join(str(num) for num in sorted_nums)
    return result


def check(f):
    print(f())