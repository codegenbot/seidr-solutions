```
def longest(*strings):
    result_strings = ()
    while True:
        s = input("Enter a string (or 'stop' to finish): ")
        if s.lower() == "stop":
            break
        result_strings += (s,)
    if not result_strings:
        print("No strings were entered.")
    else:
        print(max(result_strings, key=len))