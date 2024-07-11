```
def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)

if __name__ == "__main__":
    user_input = input("Enter space-separated integers: ")
    numbers = user_input.split()
    
    try:
        for num in numbers:
            int_num = int(num)
            if not isinstance(int_num, int):
                raise ValueError
        
        lst = [int(i) for i in numbers]
        
        print(solution(lst))
    except ValueError:
        print("Invalid input. Please enter only integers.")