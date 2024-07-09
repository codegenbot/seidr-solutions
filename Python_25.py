```
while True:
    try:
        n = input("Enter an integer: ")  
        if not n.replace('-',"").replace('.',"").replace(',',"").isdigit():
            print("Invalid input. Please enter an integer.")
        else:
            n = int(n)  
            result = factorize(n)  
            print(result)
            break
    except ValueError:
        print("Invalid input. Please enter an integer.")