def prefixes(string):
    return [string[:i] for i in range(1, len(string) + 1)]

def main():
    try:
        input_string = input().strip()
        if input_string:
            print("\n".join(prefixes(input_string)))
        else:
            print("No input provided.")
    except EOFError:
        print("No input provided.")

if __name__ == "__main__":
    main()