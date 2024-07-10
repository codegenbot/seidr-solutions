```
def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)


def main():
    n = int(input("Enter the number of elements: "))
    while True:
        try:
            lst = list(map(int, input(f"Enter {n} numbers separated by space: ").split()))
            if len(lst) == 0:
                print("No valid inputs")
                continue
            break
        except ValueError:
            print("Invalid input. Please enter valid integers separated by space.")

    print(solution(lst))


main()