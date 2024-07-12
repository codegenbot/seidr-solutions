def get_output(class_name: str, strongest_extension: str, filtered_extensions: List[str]) -> str:
    return (
        f"{class_name}.{strongest_extension}"
        if strongest_extension.isalpha()
        else f"{class_name}.{filtered_extensions[0]}"
    )