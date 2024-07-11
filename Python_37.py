def sort_even(l):
    return sorted([x for x in l if x % 2 == 0])


def task_description():
    num_list = input("Enter numbers separated by comma: ").split(",")
    num_list = [int(i) for i in num_list]
    print(sort_even(num_list))


if __name__ == "__main__":
    task_description()