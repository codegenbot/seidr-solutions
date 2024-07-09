```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    elif '.' not in file_name or len(file_name.split('.')) != 2:
        return 'No'
    elif not file_name[:file_name.index('.')].isalnum():
        return 'No'
    elif file_name[file_name.index('.'):].lower() not in ['txt', 'exe', 'dll']:
        return 'No'
    else:
        return 'Yes'