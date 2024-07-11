while True:
    user_input = input("Enter space-separated integers: ")
    numbers = user_input.split()
    
    try:
        lst = [int(i) for i in numbers]
        print(sum(i for i in lst[1::2] if i % 2 != 0))
        break
    except ValueError:
        print("     Invalid input. Please enter only integers.")