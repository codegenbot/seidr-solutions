```
def solution(lst=[]):
    while True:
        user_input = input("Enter a number (or 'stop' if finished): ")
        if user_input.lower() == 'stop':
            break
        try:
            num = int(user_input)
            lst.append(num)
        except ValueError:
            print("Invalid input. Please enter a valid number or type 'stop' to finish.")
    if len(lst) > 0:
        odd_sum = sum(i for i in lst if i % 2 != 0)
        return odd_sum
    else:
        return None