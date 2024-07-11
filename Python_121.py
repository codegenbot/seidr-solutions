def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)

if __name__ == "__main__":
    str_lst = input("Enter space-separated integers: ")
    lst = list(map(int, str_lst.split()))
    print(solution(lst))