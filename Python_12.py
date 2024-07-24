def longest(*strings):
    result_strings = []
    while True:
        s = input("Enter a string (or 'stop' to finish): ")
        if s.lower() == "stop":
            break
        print(s)
        result_strings.append(s)
    result = max(result_strings, key=len) if result_strings else None
    longest_s = ""
    for i in range(len(result)):
        for j in range(len(result_strings)):
            if len(result) == len(result_strings[j]):
                longest_s = result_strings[j]
    print("Longest string: ", longest_s)