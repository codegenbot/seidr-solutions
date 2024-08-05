def main():
    # Get input from the user
    numbers = list(map(int, input().split()))
    
    # Call the rolling_max function with the input list
    result = rolling_max(numbers)
    
    # Print the result
    print(result)

# Call the main function to run the program
main()