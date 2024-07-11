while True:
    user_input = input("Enter space-separated integers: ")
    try:
        lst = [int(i) for i in user_input.split()]
        break
    except ValueError:
        print("Invalid input. Please enter space-separated integers.")
        
if __name__ == "__main__":
    while True:
        user_input = input("Enter space-separated integers: ")
        try:
            numbers = [int(i) for i in user_input.split()]
            break
        except ValueError:
            print("Invalid input. Please enter space-separated integers.")
            
    lst = numbers
    print(solution(lst))