```
if __name__ == "__main__":
    input_list = [i.strip().lower() for i in input("Enter space-separated string: ").split()]
    while True:
        prefix = input("Enter prefix: ").strip().lower()
        if not prefix:  
            print("Please enter a valid prefix.")
        else:
            break
    print(filter_by_prefix(input_list, prefix))