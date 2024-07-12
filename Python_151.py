def check(func, lst):
    try:
        result = func(lst)
        print(f"The double difference of the input list is {result}")
    except TypeError as e:
        print("Error: Please enter a list of integers only.")
    except Exception as e:
        print(f"An error occurred: {e}")