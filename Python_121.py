```
def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)

if __name__ == "__main__":
    try:
        lst = list(map(int, input("Enter space-separated integers: ").split()))
        print(solution(lst))
    except ValueError:
        print("Invalid input. Please enter only integers.")