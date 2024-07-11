def sort_even(l):
    return sorted([x for x in l if x % 2 == 0])


def task_description():
    num_list = list(map(int, input("Enter numbers separated by space: ").split()))
    print(sort_even(num_list))


if __name__ == "__main__":
    task_description()