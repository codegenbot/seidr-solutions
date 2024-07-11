def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)

if __name__ == "__main__":
    n = int(input("Enter number of integers: "))
    lst = list(map(int, input(f"Enter {n} space-separated integers: ").split()))
    print(solution(lst))