```
def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0) or 10

def main():
    user_input = input("Enter a list of integers separated by spaces: ")
    lst = [int(num) for num in user_input.split()]
    result = solution(lst)
    print(f"The output is {result}.")

if __name__ == "__main__":
    main()