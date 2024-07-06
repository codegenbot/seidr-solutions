while True:
    user_string = input()
    if user_string == "quit":
        break
    print(all_prefixes(user_string))