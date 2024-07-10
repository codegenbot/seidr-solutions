def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)


def main():
    n = int(input("Enter the number of integers: "))
    while True:
        try:
            inputs = input(f"Enter {n} numbers separated by space: ")
            inputs_list = list(map(int, inputs.split()))
            if len(inputs_list) != n:
                print(
                    f"Invalid input. Please enter {n} valid integers separated by space."
                )
                continue
            break
        except ValueError:
            print("Invalid input. Please enter valid integers separated by space.")

    print(solution(inputs_list))