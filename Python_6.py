if __name__ == "__main__":
    for paren_string in input().strip().split():
        print(parse_nested_parens(paren_string))