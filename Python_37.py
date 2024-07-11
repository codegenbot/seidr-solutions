def sort_even(l):
    return sorted([x for x in l if x % 2 == 0])


def task_description():
    while True:
        try:
            num_list = list(
                map(int, input("Enter numbers separated by space: ").split())
            )
            print(sort_even(num_list))
            break
        except ValueError:
            print("Invalid input. Please enter only numbers separated by space.")


if __name__ == "__main__":
    task_description()