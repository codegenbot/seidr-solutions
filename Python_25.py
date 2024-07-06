from typing import List

def get_average_weight(librarians: List[List[str]]) -> float:
    total_weight = 0
    for librarian in librarians:
        weight = 0
        for book in librarian:
            if "hardcover" in book:
                weight += 1.5
            elif "paperback" in book:
                weight += 1
        total_weight += weight
    return total_weight / len(librarians)