print("Please enter some text (alphanumeric characters only): ", end="")
while True:
    try:
        s = input()
        if not s.isalnum():
            print("Invalid input. Please enter alphanumeric characters only.")
        else:
            output = string_to_md5(s)
            if output is not None:
                print(f"Output: {output}")
                break
    except Exception as e:
        print(f"An error occurred: {str(e)}")