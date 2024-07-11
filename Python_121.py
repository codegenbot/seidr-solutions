```Python
def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)

if __name__ == "__main__":
    while True:
        try:
            lst = list(map(int, input("Enter space-separated integers: ").split()))
            print(solution(lst))
            break
        except ValueError:
            print("Invalid input. Please enter valid integer values separated by spaces.")