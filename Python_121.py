```
def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)

if __name__ == "__main__":
    while True:
        user_input = input("Enter space-separated integers: ")
        numbers = user_input.split()
        
        try:
            lst = [int(i) for i in numbers]
            print(solution(lst))
            break
        except ValueError:
            print("     Invalid input. Please enter only integers.")