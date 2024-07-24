def indices_of_substring(text, target):
    result = []
    last_occurrence_index = 0
    while True:
        occurrence_index = text.find(target, last_occurrence_index)
        if occurrence_index == -1:
            break
        result.append(occurrence_index)
        last_occurrence_index = occurrence_index + 1
    return result