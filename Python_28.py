def concatenate_strings():
    strings = input("Enter multiple lines of text (enter 'stop' to finish): ")
    while strings.lower() != "stop":
        if strings.lower() == "stop":
            break
        print(concatenate([strings]))
        strings = input()