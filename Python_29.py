def filter_by_prefix() -> None:
    string_list: List[str] = []
    while True:
        s = input("Enter a list of strings (one per line), separate them with '%%': ")
        if s.lower() == "%%":
            break
        string_list.append(s)
    prefix = input("Enter the prefix: ")

    result = [s for s in string_list if s.startswith(prefix)]
    print(result)