```python
def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0) or 0

def main():
    lst = list(map(int, input("Enter a list of numbers separated by space: ").split()))
    print(solution(lst))

if __name__ == "__main__":
    main()