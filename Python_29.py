```
if __name__ == "__main__":
    input_list = [i.strip().lower() for i in input("Enter space-separated string: ").split()]
    input_list.sort()
    while True:
        prefix = input("Enter prefix: ").strip().lower()
        if len(prefix) > 0:
            break
    print(filter_by_prefix(input_list, prefix))