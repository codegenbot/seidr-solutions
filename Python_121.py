```Python
def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)

if __name__ == "__main__":
    user_input = input("Enter a list of numbers: ")
    try:
        input_list = [int(x) for x in user_input.split()]
        print(solution(input_list))
    except ValueError:
        print("Invalid input. Please enter a list of integers.")