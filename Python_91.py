def is_bored(S):
    if S.strip().lower().startswith('i am bored'):
        return True
    else:
        return False

if __name__ == "__main__":
    S = input("Enter text (type 'q' to quit): ")
    while S != 'q':
        print(is_bored(S))
        S = input("Enter text (type 'q' to quit): ")