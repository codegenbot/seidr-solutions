def solution(path):
    if not os.path.exists(path):
        return "File does not exist"
    with open(path) as file:
        content = file.read()
    return content