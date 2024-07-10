```
def solution(lst):
    result = []
    while True:
        user_input = input("Enter a number (or 'stop' if finished): ")
        if user_input.lower() == 'stop':
            break
        try:
            num = int(user_input)
            result.append(num)
        except ValueError:
            print("Invalid input. Please enter a valid number or type 'stop' to finish.")
    if len(result) > 0:
        odd_sum = 0
        for num in result:
            if num % 2 != 0:
                odd_sum += num
        return odd_sum
    else:
        return None