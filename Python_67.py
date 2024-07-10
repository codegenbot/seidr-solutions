def fruit_distribution(sentence):
    sentence = (
        " ".join(sentence)
        .replace("apples and", "apples ")
        .replace("oranges", " oranges")
        .split()
    )
    if "apples" not in sentence or "oranges" not in sentence:
        return None
    apples_and_part = [part for part in sentence if "apples" in part][0]
    apples = int(apples_and_part.replace("apples ", "").replace("and", ""))
    oranges_and_part = [part for part in sentence if "oranges" in part][0]
    oranges = int(oranges_and_part.replace("oranges ", "").replace("and", ""))
    return len(sentence) - sum(
        [1 if x == "apples" else 1 if x == "oranges" else 0 for x in sentence]
    )