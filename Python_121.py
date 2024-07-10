```
def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)


def main():
    n = int(input("Expected number of inputs: "))
    while True:
        try:
            inputs = input(f"Enter {n} numbers separated by space: ")
            lst = list(map(int, inputs.split()))
            if len(lst) != n:
                print(
                    "Invalid input. Please enter {} valid integers separated by space.".format(
                        n
                    )
                )
                continue
            break
        except ValueError:
            print("Invalid input. Please enter valid integers separated by space.")

    print(solution(lst))