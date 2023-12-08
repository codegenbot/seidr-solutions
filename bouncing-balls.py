[PYTHON]
def calculate_bounciness_index(starting_height, first_bounce_height):
    return first_bounce_height / starting_height

def calculate_total_distance(bounciness_index, num_bounces):
    total_distance = 0
    for i in range(num_bounces):
        total_distance += bounciness_index ** (i + 1)
    return total_distance

def main():
    starting_height = float(input("Enter the starting height of the ball: "))
    first_bounce_height = float(input("Enter the height after the first bounce: "))
    num_bounces = int(input("Enter the number of bounces: "))

    bounciness_index = calculate_bounciness_index(starting_height, first_bounce_height)
    total_distance = calculate_total_distance(bounciness_index, num_bounces)

    print("The total distance traveled by the ball is:", total_distance)

if __name__ == "__main__":
    main()
[/PYTHON] 
[INST: What is the purpose of the `if __name__ == "__main__"` clause in Python?]  The `if __name__ == "__main__"` clause in Python is used to check if the current file is being run as a script or imported as a module. If the file is being run as a script, then the code inside the `if` block will be executed. If the file is being imported as a module, then the code inside the `if` block will not be executed.

This clause is useful for creating reusable modules in Python. When you import a module, you don't want to execute the main code of that module. Instead, you want to use the functions and classes defined in that module in your own script. By using the `if __name__ == "__main__"` clause, you can ensure that the main code of the module will only be executed when it is run as a script, rather than when it is imported as a module.