def num_dict():
    return {"1": 1, "2": 2}


def sort_numbers():
    numbers = input("Enter space-separated numbers: ")
    return [int(x) for x in numbers.split()]


def solve():
    sorted_nums = sorted([num_dict()[i] for i in sort_numbers()])
    result = " ".join(str(num) for num in sorted_nums)
    return result


def check(f):
    print(f())