while True:
    try:
        s = str(input("Please enter a string: "))
        if not s:
            print("Error: Please provide valid string.")
            continue
        print("\n".join(get_all_prefixes(s)))
        break
    except Exception as e:
        print(f"Unexpected error occurred: {e}")