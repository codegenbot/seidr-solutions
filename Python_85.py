
import os

def most_recent_db(path):
    """Return the path to the most recently updated database file.
    Keyword arguments:
        path: A string that represents the Path in which Database files are located.
        The function is NOT case sensitive. It returns the location of the latest Database
        file even if it is in another directory in the URL.

    Examples:
        DB files typically have .db extensions.
        path=="~/Desktop/Database"
            Database.0.db
            Database.1.db
            Database.2.db
        most_recent_db(path) ==> ~/Desktop/Database/Database.2.db

        path=="~/Desktop/Database"
            Database.0.db
            Database.1.db
            Database.2.db
            Database.1.db.bak <== Copy of the most recently added db.
        most_recent_db(path) ==> ~/Desktop/Database/Database.2.db
    return ...  # Python File Object or a path to the most recently updated database file
        
    """
